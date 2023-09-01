onmessage = function(event){
    var rcvData = event.data;
    stopOperation();
    this.postMessage(rcvData);
}

function stopOperation(){
    // 현재시간을 갖고 옴
    var endTime = new Date().getTime() + 5000;
    while(new Date().getTime() < endTime){;}
    int i=0;
}
