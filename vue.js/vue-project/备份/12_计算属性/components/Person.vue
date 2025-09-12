<template>
    <div class="person">
        <!-- v-bind是单向数据绑定 由let流向input
        v-model是双向数据绑定 -->
        姓:<input v-model="FirstName"></input><br>
        名:<input v-model="LastName"></input><br>
        <!-- 全名:<span>{{ FirstName }}{{ LastName }}</span> -->
        全名:<span>{{ FullName }}</span><br>
        全名:<span>{{ FullName }}</span><br>
        <button @click="ChName">将全名改为lisi</button><br>
    </div>
</template>

<script setup lang="ts">
import { ref, computed } from 'vue';
let FirstName = ref("薄");
let LastName = ref("雨涵");
//这么定义的FullName是一个计算属性,且是只读的
// let FullName = computed(() => {
//     //计算属性
//     //有缓存 存在多个FullName的时候只会计算一次,而如果用函数计算会计算2次
//     return FirstName.value.slice(0, 1).toUpperCase() + FirstName.value.slice(1) + "-" + LastName.value;
//     console.log(1);
// })

//这么定义的FullName是一个计算属性,且是只可读的
let FullName = computed({
    get() {
        return FirstName.value.slice(0, 1).toUpperCase() + FirstName.value.slice(1) + "-" + LastName.value;
    },
    set(val) {
        //ChName按钮的点击会引起set的调用
        const x = val.split("-");
        console.log(x);
        FirstName.value = x[0];
        LastName.value = x[1];
    }
})

function ChName() {
    FullName.value = "li-si";
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