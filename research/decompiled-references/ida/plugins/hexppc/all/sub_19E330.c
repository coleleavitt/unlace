__int64 *__fastcall sub_19E330(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  int v12; // r13d
  __int64 v14; // rbx
  int tinfo_size; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // edx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // edx
  __int64 v29; // [rsp+28h] [rbp-88h]
  __int64 v30; // [rsp+30h] [rbp-80h]
  int v31; // [rsp+38h] [rbp-78h]
  unsigned int v32; // [rsp+3Ch] [rbp-74h]
  __int64 v34; // [rsp+58h] [rbp-58h] BYREF
  __int64 v35; // [rsp+60h] [rbp-50h] BYREF
  char v36; // [rsp+68h] [rbp-48h]
  unsigned __int64 v37; // [rsp+78h] [rbp-38h]

  v12 = a8;
  v37 = __readfsqword(0x28u);
  if ( a4 != -1 && a7 != -1 )
  {
    v14 = a4;
    tinfo_size = get_tinfo_size();
    v16 = tinfo_size;
    if ( tinfo_size <= a9 )
    {
      v31 = 1;
    }
    else
    {
      v18 = tinfo_size % a9;
      v17 = tinfo_size / a9;
      if ( v18 )
      {
        if ( !under_debugger )
          sub_37EEE0(52517);
        goto LABEL_30;
      }
      v31 = v17;
      v19 = v17;
      v20 = v17 - 1;
      if ( (v20 & v19) != 0 )
      {
        if ( !under_debugger )
          sub_37EEE0(52518);
        goto LABEL_30;
      }
      v21 = (a8 + v20) & -v31;
      if ( a8 == v21 )
      {
        a9 = v16;
      }
      else
      {
        if ( v21 == a3[1] )
          return a1;
        v22 = a9 * (v21 - a8);
        v12 = v21;
        a9 = v16;
        v14 += v22;
      }
    }
    if ( v14 < a7 )
    {
      while ( (unsigned __int64)v12 < a3[1] )
      {
        if ( a5 > v14 )
        {
          v34 = 1;
        }
        else
        {
          v34 = 0;
          copy_tinfo_t();
        }
        v24 = -1;
        if ( a6 <= v14 )
          v24 = v14;
        if ( !*(_QWORD *)a2 )
        {
          if ( !under_debugger )
            sub_37EEE0(51371);
          goto LABEL_30;
        }
        v29 = *(_QWORD *)a2;
        v30 = v24;
        v32 = *(_DWORD *)(*a3 + 4LL * v12);
        v25 = sub_19DB60(a2, 0);
        v26 = *(_DWORD *)(a2 + 8) & 0x20;
        v35 = *(_QWORD *)(a2 + 72);
        v36 = v26 == 0 ? 5 : 1;
        a1 = sub_197230(v29, (__int64)a1, &v35, -1, v25, v32, v30, (__int64)&v34, a11, 1);
        clear_tinfo_t();
        v12 += v31;
        v14 += a9;
        if ( a7 <= v14 )
          return a1;
      }
      if ( !under_debugger )
        sub_37EEE0(51703);
LABEL_30:
      BUG();
    }
  }
  return a1;
}

