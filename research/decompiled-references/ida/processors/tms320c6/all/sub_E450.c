__int64 __fastcall sub_E450(__int64 a1, __int64 a2, char a3)
{
  _BYTE *v3; // rax
  char *v5; // rax
  char *v6; // rbp
  size_t v7; // rax
  __int64 v8; // r13
  size_t v9; // r12
  __m128i v10; // xmm0
  unsigned int v11; // [rsp+0h] [rbp-58h] BYREF
  void *v12; // [rsp+10h] [rbp-48h] BYREF
  __m128i v13; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a3 != 83 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v3 = (_BYTE *)qvector_reserve();
LABEL_3:
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = 1;
    *v3 = 0;
    return a1;
  }
  node2ea();
  if ( !(unsigned __int8)sub_D400((__int64)&v11) )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v3 = (_BYTE *)qvector_reserve();
    goto LABEL_3;
  }
  v5 = sub_D240(&v11);
  v12 = nullptr;
  v6 = v5;
  v13 = 0;
  if ( v5 )
  {
    v7 = strlen(v5);
    v8 = v7 + 1;
    v9 = v7;
    v12 = (void *)qvector_reserve();
    v13.m128i_i64[0] = v8;
    memmove(v12, v6, v9);
    *((_BYTE *)v12 + v9) = 0;
  }
  if ( v11 <= 1 )
    sub_E390((__int64 *)&v12);
  v10 = _mm_loadu_si128(&v13);
  *(_QWORD *)a1 = v12;
  *(__m128i *)(a1 + 8) = v10;
  return a1;
}

