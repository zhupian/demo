<template>
    <div class="person">
        <h1>watch的作用</h1>
        <h2>情况二:监视ref定义的对象数据类型</h2>
        <h2>姓名：{{ person.name }}</h2>
        <h2>年龄：{{ person.age }}</h2>
        <button @click="ChName">修改名字</button>
        <button @click="ChAge">修改年龄</button>
        <button @click="ChPerson">修改整个人</button>
    </div>
</template>

<script setup lang="ts">
import { ref, watch } from 'vue';
let person = ref({
    name: "薄姐",
    age: 20
})
function ChName() {
    person.value.name += "~";
}
function ChAge() {
    person.value.age += 1;
}
function ChPerson() {
    person.value = { name: "薄雨晗", age: 6 };
}
watch(person, (newValue, oldValue) => {
    //watch监视的是对象的地址值(点击ChName,ChAge),watch不会监视
    //若想监视对象内部属性的变化,需要手动开启深度监视(开启传递的第三个参数)
    console.log(person.value, "new", newValue, "old", oldValue);

}, { deep: true })
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