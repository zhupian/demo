<template>
    <div class="person">
        <h2>姓名:{{ name }}</h2>
        <h2>年龄:{{ age }}</h2>
        <button @click="ChName">修改名字</button>
        <button @click="ChAge">修改年龄</button>
        <button @click="showtel">查看联系方式</button>
    </div>
</template>

<script setup lang="ts">
import { ref } from 'vue';
defineOptions({
    name: "person123"
})
//你想让哪个数据是响应式,你就把ref给哪个数据包一下
let name = ref("张三")
let age = ref(19)
let tel = "138888888"
function ChAge() {//ref对象的.value属性是动态的
    age.value += 1;
}
function ChName() {
    name.value = "zhangsan";
}
function showtel() {
    alert(tel);
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

button {
    margin: 0 10px;
}
</style>