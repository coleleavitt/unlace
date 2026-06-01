__int64 __fastcall sub_39A0(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // esi
  int v7; // ebx
  int v8; // ecx
  int v9; // ebp
  int v10; // r13d
  int v11; // r12d
  int v12; // ebx
  char v14; // dl
  char v15; // dl
  int v16; // [rsp+8h] [rbp-40h]
  int v17; // [rsp+Ch] [rbp-3Ch]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned __int16 *)(a2 + 24);
  v6 = *(_DWORD *)(v4 + 104);
  if ( v5 < v6 || v5 >= *(_DWORD *)(v4 + 108) )
  {
    *(_BYTE *)(a1 + 120) = 1;
    if ( (unsigned int)*(unsigned __int16 *)(a2 + 24) - 33 > 1 )
      goto LABEL_18;
    v14 = *(_BYTE *)(a2 + 28);
    if ( v14 != -1 && v14 != 8 )
      goto LABEL_18;
    *(_BYTE *)(a1 + 120) = 0;
    v12 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v4 + 112) + 16LL * (v5 - v6) + 8);
    v16 = v7 & 0x200;
    v8 = v7 & 0x100;
    *(_BYTE *)(a1 + 120) = !(v7 & 1);
    v9 = v7 & 8;
    v17 = v7 & 0x400;
    v10 = v7 & 0x4000;
    v11 = v7 & 4;
    v12 = v7 & 0x10;
    if ( (unsigned int)*(unsigned __int16 *)(a2 + 24) - 33 <= 1 )
    {
      v15 = *(_BYTE *)(a2 + 28);
      if ( v15 == -1 || v15 == 8 )
        *(_BYTE *)(a1 + 120) = 0;
    }
    if ( v8 )
      sub_35A0(a1, a2, a2 + 40, 1, a3);
    if ( v16 )
      sub_35A0(a1, a2, a2 + 80, 1, a3);
    if ( v17 )
      sub_35A0(a1, a2, a2 + 120, 1, a3);
    if ( v10 )
      remember_problem();
    if ( v11 )
      sub_35A0(a1, a2, a2 + 40, 0, a3);
    if ( v9 )
      sub_35A0(a1, a2, a2 + 80, 0, a3);
  }
  if ( v12 )
    sub_35A0(a1, a2, a2 + 120, 0, a3);
LABEL_18:
  if ( *(_BYTE *)(a1 + 120) )
    add_cref();
  return 1;
}

