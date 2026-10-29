__int64 __fastcall sub_5D830(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a3 > 4 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v16 = 0;
  v15 = 0;
  nbits();
  if ( *(_DWORD *)(a1 + 4LL * a3 + 140) == 2 )
    goto LABEL_15;
  sub_15620(&v15);
  if ( (unsigned int)sub_5ABF0(a1, &v15) != 1 )
    goto LABEL_4;
  v9 = sub_5AB40(a1);
  *(_BYTE *)(a1 + 16) = 0;
  if ( v9 != 1 )
    goto LABEL_4;
  v10 = *(_QWORD *)(a1 + 32);
  if ( v10 != 2 )
  {
    if ( !v10 )
    {
      if ( a5 )
      {
        *(_DWORD *)(a1 + 4LL * a3 + 140) = 2;
        if ( a3 || *(_DWORD *)(a1 + 176) == 2 )
          goto LABEL_4;
      }
      else if ( a3 || *(_DWORD *)(a1 + 176) == 2 )
      {
        goto LABEL_4;
      }
LABEL_17:
      sub_15620(&v15);
      if ( (unsigned int)sub_5ABF0(a1, &v15) == 1 )
      {
        v11 = sub_5AB40(a1);
        *(_BYTE *)(a1 + 16) = 0;
        if ( v11 == 1 )
        {
          v12 = *(_QWORD *)(a1 + 32);
          if ( v12 != 2 )
          {
            if ( !v12 )
              *(_DWORD *)(a1 + 176) = 2;
            goto LABEL_4;
          }
          v14 = *(_BYTE **)(a1 + 24);
          if ( *v14 == 79 && v14[1] == 75 )
          {
            *(_DWORD *)(a1 + 176) = 1;
            goto LABEL_28;
          }
        }
      }
LABEL_4:
      v7 = 0;
      goto LABEL_5;
    }
LABEL_15:
    if ( a3 || *(_DWORD *)(a1 + 176) == 2 )
      goto LABEL_4;
    goto LABEL_17;
  }
  v13 = *(_BYTE **)(a1 + 24);
  if ( *v13 != 79 || v13[1] != 75 )
    goto LABEL_15;
  *(_DWORD *)(a1 + 4LL * a3 + 140) = 1;
LABEL_28:
  v7 = 1;
LABEL_5:
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v7;
}

