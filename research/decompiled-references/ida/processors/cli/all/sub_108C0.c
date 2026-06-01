__int64 __fastcall sub_108C0(
        __int64 a1,
        unsigned int a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  int v18; // ebp
  __int64 v19; // rax
  __int64 result; // rax
  unsigned __int8 v21; // [rsp+7h] [rbp-39h]
  __int64 v22; // [rsp+8h] [rbp-38h] BYREF
  __int128 v23; // [rsp+10h] [rbp-30h]
  unsigned __int64 v24; // [rsp+20h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  v23 = 0;
  v22 = 0;
  v10 = netnode_altval(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 144LL), a2, 75);
  v11 = &v22;
  if ( netnode_qgetblob(v10, &v22, 4, 0, 75) > 0 && (_QWORD)v23 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v11 = (__int64 *)*(unsigned int *)(v22 + 4 * v19);
      result = sub_10770(a1, (unsigned int)v11, 0.0, a4, a5, a6, v16, v17, a9, a10);
      if ( !(_BYTE)result )
        break;
      v19 = ++v18;
      if ( v18 >= (unsigned __int64)v23 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    result = 1;
  }
  if ( v22 )
  {
    v21 = result;
    *(_QWORD *)&v23 = 0;
    qfree(v22, v11, v12, v13, v14, v15);
    return v21;
  }
  return result;
}

