<template>
    <div class="person">
        <h1>watch的作用</h1>
        <h2>情况三:监视reactive定义的对象数据,且默认开启了深度监视</h2>
        <h2>姓名：{{ person.name }}</h2>
        <h2>年龄：{{ person.age }}</h2>
        <button @click="ChName">修改名字</button>
        <button @click="ChAge">修改年龄</button>
        <button @click="ChPerson">修改整个人</button>
    </div>
</template>

<script setup lang="ts">
import { reactive, watch, toRefs } from 'vue';
let person = reactive({
    name: "薄姐",
    age: 20
})
function ChName() {
    person.name += "~";
}
function ChAge() {
    person.age += 1;
}
function ChPerson() {
    Object.assign(person, { name: "薄雨晗", age: 30 });
}

watch(person, (newValue, oldValue) => {
    console.log(person);

})
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