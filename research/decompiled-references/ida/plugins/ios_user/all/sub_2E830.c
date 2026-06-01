__int64 __fastcall sub_2E830(_QWORD *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  unsigned __int64 v8; // rsi
  _QWORD *v10; // r12
  __int64 v11; // r13
  unsigned __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h]
  int v15; // [rsp+10h] [rbp-28h]

  v7 = (_QWORD *)a1[64];
  v8 = *(unsigned int *)(a2 + 16);
  v14 = __readfsqword(0x28u);
  if ( !v7 )
  {
    v10 = (_QWORD *)a1[6];
    v11 = sub_28D00((__int64)a1, v8);
    goto LABEL_4;
  }
  v10 = sub_28FD0(v7, v8, a1 + 28, 0, a5, a6, v13, v14, v15);
  if ( v10 )
  {
    v11 = *(unsigned int *)(a2 + 16);
LABEL_4:
    v13 = *(unsigned int *)(a2 + 20);
    sub_2E3A0((__int64)v10, &v13, 1u, "strings table", v11, -1);
    return sub_2E790((__int64)v10, v11, v13, a3);
  }
  return 0;
}

