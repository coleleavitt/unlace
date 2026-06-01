__int64 __fastcall sub_1D070(__int64 a1, unsigned __int16 a2, __int64 a3, char a4, unsigned __int64 a5, char a6)
{
  __int64 v10; // rax
  int v11; // r8d
  __int64 *outctx; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // rsi
  bool v17; // zf
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  char v22; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 33384) = 0;
  if ( a5 )
  {
    outctx = (__int64 *)create_outctx(-1, 0, 0);
    if ( (unsigned int)sub_1B1E0((__int64)outctx, a1, a2, 0x7FFF, 13, 0) )
    {
      v19 = *(unsigned __int16 *)(a1 + 33031);
      if ( v19 < a5 )
        sub_1CF50(outctx, a5 - v19, 2u);
      else
        sub_1CF50(outctx, a5, 1u);
    }
  }
  else
  {
    if ( *(_WORD *)(a1 + 33147) )
    {
      v10 = create_outctx(-1, 0, 0);
      v11 = 13;
    }
    else
    {
      v10 = create_outctx(-1, 0, 0);
      v11 = 12;
    }
    outctx = (__int64 *)v10;
    if ( (unsigned int)sub_1B1E0(v10, a1, a2, 0x7FFF, v11, 0) )
      sub_1CF50(outctx, *(unsigned __int16 *)(a1 + 33147), (*(_WORD *)(a1 + 33147) == 0) + 3);
  }
  v16 = s1;
  if ( outctx[4] )
    v16 = (const char *)outctx[3];
  qstrncpy(a1 + 33386, v16, 0x8000, v13, v14, v15);
  if ( outctx )
    (*(void (__fastcall **)(__int64 *))(*outctx + 8))(outctx);
  sub_1EC50(a1, a1 + 33386);
  if ( (a6 & 1) != 0 )
  {
    if ( (a4 & 7) != 0 )
    {
      if ( (a4 & 7) == 1 )
      {
        if ( (a6 & 4) != 0 )
          set_name(a3, &unk_228D8, 256);
        add_entry(a5, a3, a1 + 33386, 0, 0);
      }
      else
      {
        set_name(a3, a1 + 33386, 6144);
      }
    }
    else
    {
      if ( (a6 & 4) != 0 )
        set_name(a3, &unk_228D8, 256);
      add_entry(a3, a3, a1 + 33386, 0, 0);
    }
  }
  if ( *(char *)(a1 + 33384) > 0 && (a6 & 2) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 33336);
    v22 = *(_BYTE *)(a1 + 33384);
    netnode_supset(v20, a3, &v22, 1, 114);
  }
  v17 = *(_BYTE *)(a1 + 33385) == 0;
  *(_BYTE *)(a1 + 33384) = -1;
  if ( v17 || (a6 & 4) != 0 )
    return v23 - __readfsqword(0x28u);
  else
    return sub_7B10(a1, a3, "Strange name");
}
