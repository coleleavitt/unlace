__int64 __fastcall sub_1AC70(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  __int64 v6; // rax
  unsigned __int16 v8; // ax
  unsigned int v9; // r13d
  int v10; // eax
  int v12; // eax
  __int64 v13; // r13
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  char v25; // r8
  int v26; // edx

  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v6 + 384)
    || (*(_BYTE *)(v6 + 384) = 1,
        v13 = *(_QWORD *)(a1 + 8),
        *(_QWORD *)(v13 + 48) = get_name_ea(-1, ".toc"),
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL),
        v14 == -1) )
  {
LABEL_2:
    *(_DWORD *)(a2 + 4) = 4;
    *(_WORD *)a2 = 0;
    v8 = *(_WORD *)(a3 + 12);
    if ( v8 == 17 )
    {
LABEL_6:
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 40);
      *(_BYTE *)(a1 + 100) = (*(_BYTE *)(a2 + 4) & 2) != 0;
      goto LABEL_7;
    }
    if ( v8 <= 0x11u )
    {
      if ( v8 != 8 )
      {
        if ( v8 != 16 )
          goto LABEL_7;
        goto LABEL_6;
      }
      *(_DWORD *)(a2 + 4) = 7;
      *(_WORD *)a2 = 1;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
      if ( v15 == -1 || (v16 = getseg(v15)) == 0 )
      {
        sub_59A0((__int64)"Strange WinNT relocation information");
        return 0;
      }
      v17 = *(_QWORD *)(a1 + 8);
      if ( *(_BYTE *)(v16 + 184) == 1 )
        v18 = *(_QWORD *)(v17 + 48);
      else
        v18 = netnode_altval(*(_QWORD *)(v17 + 125), *(_QWORD *)v16, 65);
      *(_QWORD *)(a1 + 56) -= v18;
LABEL_7:
      v9 = sub_14280((_QWORD *)a1, a2, a3);
      if ( (_BYTE)v9 )
      {
        v10 = *(unsigned __int16 *)(a3 + 12);
        if ( (_WORD)v10 == 8 )
        {
          v19 = *(_DWORD *)(a2 + 4);
          v20 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
          if ( (v19 & 1) != 0 )
          {
            v21 = *(_QWORD *)(a2 + 8);
          }
          else
          {
            v23 = *(_QWORD *)(a2 + 16);
            v21 = 0;
            if ( v23 != -1 )
            {
              v24 = sel2para(v23, a2);
              v19 = *(_DWORD *)(a2 + 4);
              v21 = 16 * v24;
            }
          }
          v22 = *(_QWORD *)(a2 + 24);
          *(_QWORD *)(a2 + 8) = v20;
          *(_DWORD *)(a2 + 4) = v19 | 1;
          *(_QWORD *)(a2 + 24) = v21 + v22 - v20;
          set_fixup(*(_QWORD *)(a1 + 32), a2);
          v10 = *(unsigned __int16 *)(a3 + 12);
        }
        *(_DWORD *)(a1 + 96) = v10;
        return v9;
      }
      return 0;
    }
    if ( v8 != 18 )
      goto LABEL_7;
    v12 = *(_DWORD *)(a1 + 96);
    if ( v12 == 16 )
    {
      v25 = 0;
      v26 = 16;
    }
    else
    {
      if ( v12 != 17 )
      {
        sub_59A0((__int64)"Unexpected PAIR relocation (sec %d,addr %a,target %a)", *(_DWORD *)(a1 + 24), a4, a5);
        goto LABEL_7;
      }
      v25 = 1;
      v26 = 17;
    }
    if ( !(unsigned __int8)sub_1AAA0(a1, a2, v26, -1, v25) )
      return 0;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(get_ph(-1, ".toc") + 4) == 15 )
  {
    sub_5F40(0xBB9u, v14, 0);
    goto LABEL_2;
  }
  if ( under_debugger )
    BUG();
  interr(10230);
  return sub_1AF00();
}
