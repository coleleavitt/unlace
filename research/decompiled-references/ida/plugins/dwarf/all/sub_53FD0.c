__int64 __fastcall sub_53FD0(__int64 a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 idati; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v11; // [rsp+10h] [rbp-28h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v3 = *(_DWORD *)(a1 + 280);
  v12 = __readfsqword(0x28u);
  if ( !v3 )
    v3 = *(_DWORD *)(a1 + 276);
  v4 = *(_QWORD *)(a1 + 384);
  if ( (get_tinfo_property(v4, 2) & 0x3F) == 0x2D )
  {
    v7 = *(unsigned int *)(a1 + 276);
    if ( !(_DWORD)v7 )
    {
      if ( !under_debugger )
        interr(30415);
      BUG();
    }
    idati = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 144LL) + 8LL);
    v11 = 1;
    v10[1] = v3;
    if ( !idati )
      idati = get_idati(v4, 2, 1, v7, v5, v6);
    v10[0] = idati;
    create_tinfo(a2, 61, 189, v10);
  }
  else
  {
    copy_tinfo_t(a2, a1 + 384);
  }
  return 1;
}

