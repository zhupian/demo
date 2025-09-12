<template>
    <div class="person">
        <h2>姓名:{{ name }}</h2>
        <h2>年龄:{{ age }}</h2>
        <button @click="ChName">修改名字</button>
        <button @click="ChAge">修改年龄</button>
        <button @click="showtel">查看联系方式</button>
    </div>
</template>
<script lang="ts">
    export default{
    name :'person',
    setup(){
        console.log("@@@",this);//vue3中已经开始弱化this了
        let name="张三"//这里不是响应式布局,所以点击按钮不会改变
        let age=19
        let tel=138888888
        function ChAge(){
            age+=1;
        }
       function ChName(){
            name="zhangsan";
        }
        function showtel(){
            alert(tel);
        }
        return {name,age,ChName,ChAge,showtel};
    }
    }
</script>
<style>
    .person {
  border: 2px solid #333;
  background-color: aqua;
  padding: 20px;
  margin: 20px;
  border-radius: 8px;
}
    button{
        margin: 0 10px;
    }
</style>