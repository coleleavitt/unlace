__int64 __fastcall sub_2453C0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  unsigned int v5; // r12d
  __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r13
  __int64 v15; // [rsp+0h] [rbp-58h]
  __int64 tinfo_size; // [rsp+8h] [rbp-50h]
  _QWORD v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 8) != 2 )
  {
    if ( !under_debugger )
      sub_383060(0xC4E0u, a3);
    BUG();
  }
  v3 = 0;
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) != dword_42B8C0[v3] )
  {
    v3 += 2;
    if ( v3 == 26 )
      return 0;
  }
  v5 = dword_42B8C0[(int)v3 + 1];
  if ( !v5 || (unsigned __int8)sub_256590(*(_QWORD *)(a1 + 24)) )
    return 0;
  if ( !(unsigned __int8)sub_244600(
                           a2,
                           *(_QWORD *)(a1 + 32),
                           *(_QWORD *)(a1 + 24),
                           *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL),
                           a3) )
  {
    v6 = *(_QWORD *)(a1 + 32);
    v7 = *(unsigned int *)(v6 + 8);
    if ( (unsigned int)v7 <= 0x28 )
    {
      v8 = 0x14100000000LL;
      if ( _bittest64(&v8, v7) )
      {
        v9 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v9 + 8) == 51 && *(_DWORD *)(*(_QWORD *)(v9 + 24) + 8LL) == 48 )
        {
          v10 = *(_QWORD *)(v9 + 48);
          if ( (v10 & 0xE) == 0 && (v10 & 0x30) != 0 )
          {
            v11 = *(_QWORD *)(v6 + 24);
            if ( *(_DWORD *)(v11 + 8) == 48 )
            {
              v15 = *(_QWORD *)(a2 + 112);
              if ( !sub_259AA0(*(_QWORD *)(v11 + 24), *(_QWORD *)(a1 + 24)) && (unsigned int)get_tinfo_property() == 1 )
              {
                tinfo_size = get_tinfo_size();
                if ( tinfo_size == get_tinfo_size() )
                {
                  sub_32C540(v17, v15, (_QWORD *)(v11 + 48));
                  copy_tinfo_t();
                  clear_tinfo_t();
                  v12 = *(_QWORD *)(v9 + 24);
                  v13 = *(_DWORD *)(v12 + 56) & 0xFFFFFFDF;
                  if ( (*(_BYTE *)(v11 + 56) & 0x20) != 0 )
                    v13 = *(_DWORD *)(v12 + 56) | 0x20;
                  *(_DWORD *)(v12 + 56) = v13;
                  copy_tinfo_t();
                  v14 = *(_QWORD *)(v6 + 24);
                  if ( v14 )
                  {
                    sub_255630(*(_QWORD *)(v6 + 24));
                    clear_tinfo_t();
                    j__qfree(v14);
                  }
                  sub_255850((__int64 *)v6, *(_QWORD *)(v6 + 32));
                  goto LABEL_24;
                }
              }
            }
          }
        }
      }
    }
    return 0;
  }
LABEL_24:
  *(_DWORD *)(a1 + 8) = v5;
  sub_2441C0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a2 + 112), 0, a3);
  sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0, a3);
  sub_245060(a1);
  return 1;
}

