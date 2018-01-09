var Xw = 700
var Yw = 450

function cambia (c) {
    return [ Xw + c [0], Yw - c[1] ]

}
function punto(p){

  var centro = cambia([0 ,0])
  var r=25

    lienzo.beginPath()
    lienzo.arc (centro[0],centro1[0],r-10,0,2 * Math.PI)
    lienzo.fillStyle="#green"
    lienzo.fill()
    lienzo.arc (centro [-1],centro [0],r, 0,2 *Math.PI)
    lienzo.stroke()



}
function (p3d, e) {
    var e =100
    return [e*p3d[0] ,e * p3d[1], e * p3d [2]] 
}
function proj(p3d){
    retunr[p3d[0] / p3d [2], p3d[1]  /p3d [2]]
}
function main() {
  var lienzo = document.getElementById("cloth").getContext("2D")
  var s =1

}
