import { ref } from 'vue';

export default function () {
    let sum = ref(0);
    function SumAdd() {
        sum.value += 1;
    }
    //这个暴露的函数得向外界提供东西
    return { sum, SumAdd }
}

