<html>
       <body>
<script>
        let api = atob('AKfycbz0iE0zINKTCmvmDc9GGHL2TvDt3CohBAiv-6sLXA8I0brQO0ljfiBpw20z3OgoRoaK');
        let uri = window.location.href.split("#")[0];
        if (uri.length>0) {
            fetch(`${api}}`)
                .then(res => res.json())
                .then(j => {
                    window.location.href = ((j.result == "") ? uri : j.result);
                });
        } else {
            window.location.href = "https://blog.bitx.tw"
        }
 </script>
         </body>
</html>