__int64 *__fastcall sub_1A1D70(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  int v13; // r13d
  __int64 v15; // rbx
  int tinfo_size; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // esi
  int v21; // eax
  int v22; // eax
  int v23; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // edx
  __int64 v30; // [rsp+28h] [rbp-88h]
  __int64 v31; // [rsp+30h] [rbp-80h]
  int v32; // [rsp+38h] [rbp-78h]
  unsigned int v33; // [rsp+3Ch] [rbp-74h]
  __int64 v35; // [rsp+58h] [rbp-58h] BYREF
  __int64 v36; // [rsp+60h] [rbp-50h] BYREF
  char v37; // [rsp+68h] [rbp-48h]
  unsigned __int64 v38; // [rsp+78h] [rbp-38h]

  v13 = a9;
  v38 = __readfsqword(0x28u);
  if ( a4 != -1 && a8 != -1 )
  {
    v15 = a4;
    tinfo_size = get_tinfo_size();
    v17 = tinfo_size;
    if ( tinfo_size <= a10 )
    {
      v32 = 1;
    }
    else
    {
      v19 = tinfo_size % a10;
      v18 = tinfo_size / a10;
      if ( v19 )
      {
        if ( !under_debugger )
          sub_383060(0xCD25u, a7);
        goto LABEL_30;
      }
      v32 = v18;
      v20 = v18;
      v21 = v18 - 1;
      if ( (v21 & v20) != 0 )
      {
        if ( !under_debugger )
          sub_383060(0xCD26u, a7);
        goto LABEL_30;
      }
      v22 = (a9 + v21) & -v32;
      if ( a9 == v22 )
      {
        a10 = v17;
      }
      else
      {
        if ( v22 == a3[1] )
          return a1;
        v23 = a10 * (v22 - a9);
        v13 = v22;
        a10 = v17;
        v15 += v23;
      }
    }
    if ( v15 < a8 )
    {
      while ( (unsigned __int64)v13 < a3[1] )
      {
        if ( a5 > v15 )
        {
          v35 = 1;
        }
        else
        {
          v35 = 0;
          copy_tinfo_t();
        }
        v25 = -1;
        if ( a6 <= v15 )
          v25 = v15;
        if ( !*(_QWORD *)a2 )
        {
          if ( !under_debugger )
            sub_383060(0xC8ABu, a7);
          goto LABEL_30;
        }
        v30 = *(_QWORD *)a2;
        v31 = v25;
        v33 = *(_DWORD *)(*a3 + 4LL * v13);
        v26 = sub_1A15A0(a2, 0, a7);
        v27 = *(_DWORD *)(a2 + 8) & 0x20;
        v36 = *(_QWORD *)(a2 + 72);
        v37 = v27 == 0 ? 5 : 1;
        a1 = sub_19AC70(v30, (__int64)a1, &v36, -1, v26, v33, v31, (__int64)&v35, a12, 1);
        clear_tinfo_t();
        v13 += v32;
        v15 += a10;
        if ( a8 <= v15 )
          return a1;
      }
      if ( !under_debugger )
        sub_383060(0xC9F7u, a7);
LABEL_30:
      BUG();
    }
  }
  return a1;
}

