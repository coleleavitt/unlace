__int64 __fastcall sub_D31A0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rdi
  unsigned int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // r15d
  __int64 v14; // rdi
  __int64 v17; // rax
  unsigned int v18; // r12d

  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    xmmword_241500(v7);
    v8 = 1;
    v10 = sub_CA450(a1, (unsigned __int8 *)a2);
    if ( !v10 )
      goto LABEL_13;
  }
  else
  {
    v10 = sub_CA450(a1, (unsigned __int8 *)a2);
    if ( !v10 )
      return 1;
  }
  if ( *(_BYTE *)(v10 + 17) )
    sub_CC740(v10);
  v11 = **(_QWORD **)(v10 + 8);
  v12 = *(_QWORD *)(v11 + 72);
  switch ( a3 )
  {
    case 7u:
      *a4 = v12;
      v8 = 0;
      break;
    case 0x1Bu:
      v8 = 0;
      *a4 = *(_QWORD *)v11;
      break;
    case 0x1Cu:
      v9 = *(_QWORD *)(v11 + 80);
      v17 = *(_QWORD *)(v11 + 296);
      if ( v17 )
        v9 = *(_QWORD *)(v17 + 16);
      *a4 = v9;
      v8 = 0;
      break;
    case 0x23u:
      v8 = 0;
      *(_DWORD *)a4 = *(_DWORD *)(v11 + 132);
      break;
    case 0x26u:
      v18 = *(_DWORD *)a4;
      v8 = 0;
      *(_DWORD *)a4 = sub_CC900(v10, a2);
      if ( v18 <= 0xFF )
      {
        a2 = 0;
        sub_D3060(v10, 0, v18, 0);
      }
      break;
    default:
      v13 = *(_DWORD *)(a1 + 648);
      if ( *(_QWORD *)v12 )
      {
        a2 = a3;
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 80LL))(v12, a3, a4);
      }
      else
      {
        v8 = 12;
      }
      *(_DWORD *)(a1 + 648) = v13;
      if ( !*(_BYTE *)(v10 + 17) )
        goto LABEL_13;
LABEL_18:
      if ( (*(_DWORD *)(v10 + 20))-- == 1 )
        sub_CC7D0(v10, a2, v9);
      goto LABEL_13;
  }
  if ( *(_BYTE *)(v10 + 17) )
    goto LABEL_18;
LABEL_13:
  v14 = *(_QWORD *)(a1 + 24);
  if ( v14 )
    xmmword_241510(v14, a2, v9);
  return v8;
}
