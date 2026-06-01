unsigned __int64 __fastcall sub_5FAB0(int *a1, __int64 a2)
{
  int v2; // edx
  __int64 (__fastcall *v3)(__int64, __int64 *); // rax
  unsigned int v4; // edx
  int v5; // eax
  int v6; // eax
  __int16 v8; // dx
  int v9; // edx
  int v10; // eax
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 80);
  v13 = __readfsqword(0x28u);
  if ( v2 < 0 )
    goto LABEL_7;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 120LL);
  if ( v3 == sub_5F110 )
  {
    v4 = *(_DWORD *)(a2 + 64);
    if ( v4 == -1 )
      goto LABEL_7;
    v5 = sub_55B00(*(_QWORD **)(a2 + 8), &v11, v4);
  }
  else
  {
    v5 = v3(a2, &v11);
  }
  if ( v5
    || (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 248LL))(v11, &v12)
    || (*(_BYTE *)(v12 + 48) & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = *(_WORD *)(v12 + 84);
  if ( v8 == 4104 )
  {
    v9 = *(unsigned __int16 *)(v12 + 94);
    if ( !*(_WORD *)(v12 + 94) )
      goto LABEL_7;
  }
  else
  {
    if ( v8 != 4105 )
      goto LABEL_7;
    v9 = *(unsigned __int16 *)(v12 + 102);
    if ( *(_BYTE *)(v12 + 100) == 11 || *(_DWORD *)(v12 + 96) )
    {
      if ( !*(_WORD *)(v12 + 102) )
        goto LABEL_7;
      v10 = *(_DWORD *)(a2 + 80);
      ++v9;
      goto LABEL_18;
    }
    if ( !(_WORD)v9 )
      goto LABEL_7;
  }
  v10 = *(_DWORD *)(a2 + 80);
LABEL_18:
  if ( v10 < v9 )
  {
    v6 = 3;
    goto LABEL_8;
  }
LABEL_7:
  v6 = 1;
LABEL_8:
  *a1 = v6;
  return v13 - __readfsqword(0x28u);
}

