__int64 __fastcall sub_25710(__int64 a1, __int64 a2, int a3, double a4, __m128i a5, __m128 a6, __m128 a7)
{
  bool v8; // zf
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned int v12; // eax
  __int64 *v13; // rdx
  _QWORD *v14; // rdi
  unsigned int v15; // [rsp+Ch] [rbp-7Ch]
  _QWORD v16[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v17; // [rsp+20h] [rbp-68h]
  __int128 v18; // [rsp+28h] [rbp-60h]
  __int128 v19; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+48h] [rbp-40h]
  unsigned __int64 v21; // [rsp+58h] [rbp-30h]

  v8 = *(_BYTE *)(a1 + 1414) == 0;
  v21 = __readfsqword(0x28u);
  if ( v8 || *(_BYTE *)(a1 + 1349) )
  {
    do
    {
      while ( *(_QWORD *)(a1 + 136) == *(_QWORD *)(a1 + 168) )
      {
        v16[1] = -1;
        v17 = 0;
        v16[0] = 0xFFFFFFFFLL;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v12 = sub_24CA0(a1, (__int64)v16, a3, 0.0, *(double *)a5.m128i_i64, a6, a7);
        if ( !v12 )
          goto LABEL_22;
        if ( (v17 & 0xFFFFFFF00000000LL) != 0 )
        {
          v14 = *(_QWORD **)(a1 + 168);
          if ( v14 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
          {
            sub_1E980((_QWORD *)(a1 + 120));
          }
          else
          {
            *v14 = 0xFFFFFFFFLL;
            v14[1] = -1;
            v14[2] = 0;
            copy_debug_event();
            *(_QWORD *)(a1 + 168) += 72LL;
          }
          *(_BYTE *)(a1 + 1412) = 0;
          free_debug_event();
        }
        else
        {
          free_debug_event();
        }
      }
      copy_debug_event();
      if ( *(_QWORD *)(a1 + 136) == *(_QWORD *)(a1 + 152) - 72LL )
      {
        free_debug_event();
        operator delete(*(void **)(a1 + 144), 0x1F8u);
        v13 = (__int64 *)(*(_QWORD *)(a1 + 160) + 8LL);
        *(_QWORD *)(a1 + 160) = v13;
        v10 = *v13;
        a5 = (__m128i)(unsigned __int64)(v10 + 504);
        *(__m128i *)(a1 + 144) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, a5);
      }
      else
      {
        free_debug_event();
        v10 = *(_QWORD *)(a1 + 136) + 72LL;
      }
      *(_QWORD *)(a1 + 136) = v10;
    }
    while ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 0 );
    v8 = *(_QWORD *)(a1 + 440) == 0;
    *(_BYTE *)(a1 + 1414) = 1;
    if ( !v8 )
    {
      result = 2;
      if ( v10 != *(_QWORD *)(a1 + 168) )
        return result;
      return 1;
    }
    *(_BYTE *)(a1 + 1413) = 0;
    result = 2;
    if ( v10 == *(_QWORD *)(a1 + 168) )
      return 1;
  }
  else
  {
    if ( under_debugger )
      BUG();
    v12 = interr();
LABEL_22:
    v15 = v12;
    free_debug_event();
    return v15;
  }
  return result;
}

