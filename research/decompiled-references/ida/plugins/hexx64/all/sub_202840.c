__int64 __fastcall sub_202840(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int8 a5,
        double a6,
        __m128 a7)
{
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ebp
  int v14; // eax
  unsigned int *v15; // rbx
  int v16; // eax
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 *v20; // rdi
  __int64 v21; // rdx
  _QWORD *v22; // rax
  int v23; // edx
  __int64 v24; // r14
  __int64 v25; // rdi
  __int64 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // si
  char v30; // [rsp+0h] [rbp-A8h]
  _QWORD *v31; // [rsp+8h] [rbp-A0h]
  __int64 v34; // [rsp+28h] [rbp-80h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-78h] BYREF
  __int128 v36; // [rsp+38h] [rbp-70h]
  __int64 v37; // [rsp+48h] [rbp-60h]
  int v38; // [rsp+50h] [rbp-58h]
  unsigned __int64 v39; // [rsp+58h] [rbp-50h]
  __int64 v40; // [rsp+60h] [rbp-48h]
  unsigned __int64 v41; // [rsp+68h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 56);
  v41 = __readfsqword(0x28u);
  if ( a5 || (v11 = *(int *)(a3 + 44), (_DWORD)v11 == -1) )
  {
    if ( a2 >= *(_DWORD *)(v10 + 64) )
      sub_201380(a6);
    if ( *(_BYTE *)(a3 + 32) == 5
      && (unsigned __int8)sub_1F0C10(
                            *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8LL * a2),
                            *(_QWORD *)(a3 + 24),
                            *(int *)(a3 + 40)) )
    {
      return (unsigned int)-1;
    }
    else
    {
      v14 = *(_DWORD *)(a1 + 44);
      if ( a4 )
      {
        v24 = **(_QWORD **)(a1 + 64) + 104LL * v14;
        if ( *(_QWORD *)(v24 + 16) == -1 )
        {
          v34 = 0;
          v25 = *(_QWORD *)(v24 + 80);
          if ( !(_BYTE)v25
            || (v25 & 0xE) == 0 && (v25 & 0x30) != 0
            || (tinfo_property = get_tinfo_property(), v30 = get_tinfo_property(), clear_tinfo_t(), (v30 & 0x3F) == 0x30) )
          {
            v26 = &v34;
          }
          else
          {
            v26 = nullptr;
          }
          v27 = *(_QWORD *)(a1 + 56);
          if ( a2 >= *(_DWORD *)(v27 + 64) )
            sub_201380(a6);
          v28 = sub_2024F0(*(_QWORD *)(*(_QWORD *)(v27 + 528) + 8LL * a2), a3, v26, nullptr, a6, a7);
          v29 = v34;
          *(_QWORD *)(v24 + 16) = v28;
          if ( v29 && *(_DWORD *)(v24 + 88) == get_tinfo_size() )
            sub_1EF8F0(v24, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 1504LL), &v34, 0, a6);
          clear_tinfo_t();
          v14 = *(_DWORD *)(a1 + 44);
        }
      }
      v12 = *(_DWORD *)(a3 + 40);
      v15 = *(unsigned int **)a3;
      *(_DWORD *)(a3 + 44) = v14;
      if ( 4LL * *(_QWORD *)(a3 + 8) )
      {
        do
        {
          v17 = *(__int64 **)(a1 + 80);
          if ( !a4 )
            v17 = *(__int64 **)(a1 + 72);
          v18 = (int)*v15;
          v19 = *v17;
          v39 = 0xFFFFFFFF00000001LL;
          LOBYTE(v40) = 1;
          v20 = (unsigned __int64 *)(v19 + 24 * v18);
          v21 = *(_QWORD *)(a3 + 24);
          LOBYTE(v19) = *(_BYTE *)(a3 + 32);
          tinfo_property = 0;
          v36 = 0;
          v37 = v21;
          LOBYTE(v38) = v19;
          v22 = sub_104DF0(v20, (__int64)&tinfo_property);
          if ( tinfo_property )
          {
            v31 = v22;
            *(_QWORD *)&v36 = 0;
            qfree(tinfo_property);
            v22 = v31;
          }
          if ( v22 )
          {
            v23 = *((_DWORD *)v22 + 11);
            if ( v23 != *(_DWORD *)(a1 + 44) )
            {
              if ( a5 == 1 || v23 == -1 )
              {
                v16 = sub_202840(a1, *v15, (unsigned __int64)v22, (unsigned __int8)a4 ^ 1u, a5);
                if ( v16 < 0 )
                {
                  sub_2027F0((_QWORD *)a1, a3, a4);
                  return (unsigned int)-1;
                }
                if ( v12 < v16 )
                  v12 = v16;
              }
              else if ( !(unsigned __int8)sub_1EEA60(*(unsigned __int8 **)(a1 + 56)) )
              {
                if ( !under_debugger )
                  sub_383060(0xC4A1u, 0.0);
                goto LABEL_53;
              }
            }
          }
          else if ( !(unsigned __int8)sub_1EEA60(*(unsigned __int8 **)(a1 + 56)) )
          {
            if ( !under_debugger )
              sub_383060(0xC4A0u, 0.0);
LABEL_53:
            BUG();
          }
          ++v15;
        }
        while ( v15 != (unsigned int *)(*(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8)) );
      }
    }
  }
  else if ( (_DWORD)v11 == *(_DWORD *)(a1 + 44)
         && ((*(_BYTE *)v10 & 0x40) != 0 || (*(_BYTE *)(**(_QWORD **)(a1 + 64) + 104 * v11 + 27) & 2) != 0) )
  {
    return *(unsigned int *)(a3 + 40);
  }
  else
  {
    if ( !(unsigned __int8)sub_1EEA60((unsigned __int8 *)v10) )
    {
      if ( !under_debugger )
        sub_383060(0xC49Fu, a6);
      goto LABEL_53;
    }
    return 0;
  }
  return (unsigned int)v12;
}

