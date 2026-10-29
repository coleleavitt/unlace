__int64 __fastcall sub_5D3E0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rax
  _BYTE *v10; // rax
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0;
  sub_15620(&v11);
  sub_58A80(&v11, a3, a4);
  if ( (unsigned int)sub_5ABF0(a1, &v11) != 1 )
    goto LABEL_2;
  v8 = sub_5AB40(a1);
  *(_BYTE *)(a1 + 16) = 0;
  if ( v8 != 1 )
    goto LABEL_2;
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 != 2 )
  {
    if ( !v9 )
      *(_DWORD *)(a1 + 180) = 2;
    goto LABEL_2;
  }
  v10 = *(_BYTE **)(a1 + 24);
  if ( *v10 != 79 || v10[1] != 75 )
  {
LABEL_2:
    v6 = 0;
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 180) = 1;
  v6 = 1;
LABEL_3:
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v6;
}

