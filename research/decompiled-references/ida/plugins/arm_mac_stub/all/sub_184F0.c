__int64 __fastcall sub_184F0(_QWORD *a1, __int64 a2, char a3)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v7; // r12
  __int64 v8; // r13
  unsigned __int64 v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = (_QWORD *)a1[64];
  v5 = *(unsigned int *)(a2 + 16);
  v10[1] = __readfsqword(0x28u);
  if ( !v4 )
  {
    v7 = (_QWORD *)a1[6];
    v8 = sub_13D00((__int64)a1, v5);
    goto LABEL_4;
  }
  v7 = sub_13ED0(v4, v5, a1 + 28);
  if ( v7 )
  {
    v8 = *(unsigned int *)(a2 + 16);
LABEL_4:
    v10[0] = *(unsigned int *)(a2 + 20);
    sub_18060((__int64)v7, v10, 1u, "strings table", v8, -1);
    return sub_18450((__int64)v7, v8, v10[0], a3);
  }
  return 0;
}

