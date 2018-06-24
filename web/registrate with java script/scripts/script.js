$(document).ready(function() {
    var div = $("<div/>").appendTo("body")
    div.attr("id","divBack")
    var log = $("<div/>").appendTo("#divBack");
    log.attr("id","divLog");
    var h1 = $("<h1/>").appendTo("#divLog");
    h1.text("Login here");
    var p = $("<p/>").appendTo("#divLog");
    p.text("Your name");
    var input = $("<input/>").appendTo("#divLog");
    input.attr("class","input");
    input.attr("type","text");
    input.attr("id","nameIs");
    input.attr("placeholder","Michael");
    var p = $("<p/>").appendTo("#divLog");
    p.text("Your surname");
    var input = $("<input/>").appendTo("#divLog");
    input.attr("class","input");
    input.attr("type","text");
    input.attr("id","surnameIs");
    input.attr("placeholder","Sargsyan");
    var div = $("<div/>").appendTo("#divLog");
    div.attr("id","divForm");
    var span = $("<span/>").appendTo("#divForm");
    span.text("Male");
    var input = $("<input/>").appendTo("#divForm");
    input.attr("type","radio");
    input.attr("value","male");
    input.attr("name","gender");
    var span = $("<span/>").appendTo("#divForm");
    span.text("Female");
    var input = $("<input/>").appendTo("#divForm");
    input.attr("type","radio");
    input.attr("value","female");
    input.attr("name","gender");
    var div = $("<div/>").appendTo("#divLog");
    div.attr("id","divSend");
    var span = $("<span/>").appendTo("#divSend");
    span.text("Send");
    var timeout=$("#divSend");
    timeout.click(changeView);
})