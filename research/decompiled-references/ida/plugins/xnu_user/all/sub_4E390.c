__int64 __fastcall sub_4E390(__int64 a1, __int64 a2)
{
  char v2; // dl
  int v4; // eax
  void *v5; // rdi
  size_t v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi

  v2 = *(_BYTE *)(a2 + 33);
  v4 = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(a2 + 32) = v2;
  if ( v4 == 1 )
  {
    v11 = *(_DWORD *)(a2 + 28);
    v12 = *(_QWORD *)(a1 + 864);
    v13 = *(unsigned int *)(a2 + 24);
    if ( v2 )
    {
      if ( (_DWORD)v13 == -3 )
        v13 = 0;
      sub_69410(v12, v13, v11);
    }
    else
    {
      if ( (_DWORD)v13 == -3 )
        v13 = 0;
      sub_693C0(v12, v13, v11);
    }
  }
  else if ( v4 == 2 )
  {
    v8 = *(unsigned int *)(a2 + 28);
    v9 = *(unsigned int *)(a2 + 24);
    v10 = *(_QWORD *)(a1 + 864);
    if ( (_DWORD)v9 == -3 )
      v9 = 0;
    sub_693C0(v10, v9, v8);
  }
  v5 = *(void **)(a2 + 80);
  v6 = *(_QWORD *)(a2 + 88);
  *(_BYTE *)(a2 + 33) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  memset(v5, 0, v6);
  return 1;
}

