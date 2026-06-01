__int64 __fastcall sub_10770(
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
  __int64 v11; // r12
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // [rsp+Fh] [rbp-49h]
  _BYTE v22[4]; // [rsp+18h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+1Ch] [rbp-3Ch]
  __int64 v24; // [rsp+20h] [rbp-38h] BYREF
  __int128 v25; // [rsp+28h] [rbp-30h]
  unsigned __int64 v26; // [rsp+38h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  if ( (a2 & 0xFFFFFF) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 616);
    if ( netnode_supval(*(_QWORD *)(v11 + 144), a2, v22, 8, 97) > 0
      && (unsigned int)sub_DC40(a1, 0, v23, ".custom", "= (", a3, a4, a5, a6, v12, v13, a9, a10) )
    {
      v15 = *(_QWORD *)(v11 + 144);
      v24 = 0;
      v25 = 0;
      v16 = netnode_altval(v15, a2, 111);
      netnode_qgetblob(v16, &v24, 1, 0, 111);
      result = (unsigned int)sub_5480(a1, &v24, 1) ^ 1;
      if ( v24 )
      {
        v21 = result;
        *(_QWORD *)&v25 = 0;
        qfree(v24, &v24, v17, v18, v19, v20);
        return v21;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_4550((__int64)"NIL token is passed to display_custom_attr!!!");
    return 1;
  }
  return result;
}
