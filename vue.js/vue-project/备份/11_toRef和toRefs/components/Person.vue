<template>
    <div class="car">
        <h2>name:{{ name }}</h2>
        <h2>age:{{ age }}</h2>
        <button @click="ChName">改名字</button>
        <button @click="ChAge">改年龄</button>
    </div>
</template>

<script setup lang="ts">
import { reactive, toRefs, toRef } from 'vue';
let person = reactive({
    name: "张三",
    age: 18
})
let { name, age } = toRefs(person);
let x = toRef(person, "age");//toRefs一次性把所有的key都传递过去
console.log(x);//toRef一次只能传递一个key

//这里需要借助toRefs进行传递 直接传递的name,age会失去响应式身份
function ChName() {
    name.value = "李四"
    //这里name.value和person.name值是一样的
}
function ChAge() {
    age.value += 1;
}
</script>
<style>
.car {
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