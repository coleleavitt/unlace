__int64 __fastcall sub_1D3E0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  char v5; // al
  char v7; // dl
  unsigned int v8; // eax
  char v10; // dl
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned __int64 i; // r15
  _DWORD *v15; // rsi
  char v16; // cl
  char v17; // dl
  __int64 v18; // rdx
  unsigned __int8 v19; // [rsp+Fh] [rbp-69h]
  unsigned int v20; // [rsp+10h] [rbp-68h] BYREF
  __int128 v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v5 = *(_BYTE *)(a2 + 88);
  v23 = __readfsqword(0x28u);
  v7 = v5;
  v8 = v5 & 0xF0;
  if ( (v7 & 0xF0) == 0xC0 )
    v8 = *(_DWORD *)(a2 + 28);
  if ( v8 <= 0x10 )
    v8 = getinf(99);
  LOBYTE(v3) = v8 == 256 || v8 == 176;
  if ( (_BYTE)v3 )
    return sub_1B180((struct _Unwind_Exception *)a2, LOBYTE((&off_34160)[2 * *(unsigned int *)(a1 + 120) + 1]));
  v10 = *(_BYTE *)(a2 + 88);
  v11 = v10 & 0xF0;
  if ( (v10 & 0xF0) == 0xC0 )
  {
    v11 = *(_DWORD *)(a2 + 28);
    if ( v11 > 0x10 )
      goto LABEL_9;
  }
  else if ( v11 > 0x10 )
  {
    goto LABEL_9;
  }
  LOBYTE(v11) = getinf(99);
LABEL_9:
  v19 = sub_1D0E0(a1, (_DWORD *)(a2 + 40), (__int64 *)(a2 + 32), v11);
  if ( v19 )
  {
    v12 = *(_DWORD *)(a1 + 120);
    v21 = 0;
    v20 = v12;
    v13 = *(_QWORD *)(a2 + 8);
    if ( v13 )
    {
      v13 = 0;
      for ( i = 0; i < *(_QWORD *)(a2 + 8); ++i )
      {
        v18 = *(_QWORD *)a2 + 80 * i;
        if ( a3 > 0 )
        {
          if ( i < a3 )
            goto LABEL_18;
        }
        else if ( a3 )
        {
LABEL_18:
          v16 = 0;
          v15 = nullptr;
          goto LABEL_14;
        }
        v15 = (_DWORD *)(*(_QWORD *)a2 + 80 * i);
        v16 = a3 > 0;
LABEL_14:
        v22 = v13;
        v17 = sub_1CD50(&v20, v15, (__int64 *)(v18 + 64), v16);
        v13 = v22;
        if ( !v17 )
          return v3;
      }
    }
    *(_QWORD *)(a2 + 56) = v13;
    return v19;
  }
  return v3;
}

