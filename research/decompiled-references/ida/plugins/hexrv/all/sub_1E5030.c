void __fastcall sub_1E5030(__int64 a1, __m128i *a2, int *a3)
{
  int v3; // r13d
  int v5; // r8d
  int v6; // r9d
  __int64 *v7; // r14
  int v8; // [rsp+Ch] [rbp-6Ch] BYREF
  __m128i v9; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v10[40]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 24) )
  {
    v3 = *a3;
    if ( *a3 )
    {
      v7 = (__int64 *)sub_1DCF80(a1, &v8, (__int64)a2, a3[1]);
      if ( v8 == 1 )
      {
        if ( v3 == 1 )
          sub_1DF190((unsigned __int64 **)(a1 + 8), v7);
        else
          sub_30DC90(v7 + 5, a3);
      }
      else if ( v8 == 2 )
      {
        sub_1E3400(a1, (unsigned __int64)v7, a2->m128i_i64, a3, v5, v6);
      }
      else if ( v3 != 1 )
      {
        v9 = _mm_loadu_si128(a2);
        sub_30DB40(v10, a3);
        sub_1E4E40((__m128i *)(a1 + 8), (unsigned __int64)v7, &v9);
        sub_30DA80(v10);
      }
    }
    else
    {
      sub_13B7F0((unsigned __int64 **)(a1 + 8));
      *(_BYTE *)(a1 + 24) = 1;
    }
  }
}

