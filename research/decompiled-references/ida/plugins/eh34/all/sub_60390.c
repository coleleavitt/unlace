unsigned __int64 __fastcall sub_60390(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rdx
  _DWORD *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r14
  _QWORD *v13; // rbp
  unsigned __int64 result; // rax
  char v15; // dl
  __int64 v16; // r15
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]

  while ( 1 )
  {
    v22 = __readfsqword(0x28u);
    v5 = a4;
    v6 = *(_DWORD *)(a2 + 64);
    if ( a5 < v6 )
    {
      v7 = a2;
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 528) + 8LL * a5);
      v9 = *(_DWORD **)(v8 + 56);
      if ( !v9 )
        return v22 - __readfsqword(0x28u);
      if ( *v9 != 56 )
        return v22 - __readfsqword(0x28u);
      v10 = *(_QWORD *)(v8 + 8);
      v11 = *(_QWORD *)(v10 + 48);
      if ( !v11 )
        return v22 - __readfsqword(0x28u);
      v12 = *(_QWORD *)(v10 + 8);
      v13 = (_QWORD *)a1;
      if ( *(_DWORD *)v11 == 55 )
      {
        v15 = *(_BYTE *)(v11 + 32);
        if ( v15 == 6 )
        {
          a2 = *(_QWORD *)(v12 + 32);
          if ( *(_QWORD *)(v11 + 40) != a2 )
            return v22 - __readfsqword(0x28u);
        }
        else if ( v15 == 7 )
        {
          a1 = *(unsigned int *)(v12 + 72);
          if ( *(_DWORD *)(v11 + 40) != (_DWORD)a1 )
            return v22 - __readfsqword(0x28u);
        }
        if ( *(_DWORD *)(v12 + 76) != 6 )
          return v22 - __readfsqword(0x28u);
        v16 = *(_QWORD *)(v10 + 56);
        hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(a1, (const char *)a2);
        a1 = 343;
        a2 = v16;
        hexdsp(343, v16);
        v18 = *(_DWORD *)(v10 + 24);
        BYTE1(v18) &= ~2u;
        LOBYTE(v18) = v18 | 0x80;
        *(_DWORD *)(v10 + 24) = v18;
        *(_DWORD *)(v12 + 76) = 0;
        v6 = *(_DWORD *)(v7 + 64);
      }
      else if ( *(_DWORD *)v11 || *(_DWORD *)(v12 + 76) || *(_QWORD *)(v12 + 48) )
      {
        return v22 - __readfsqword(0x28u);
      }
      v21 = 0;
      if ( v5 < v6 )
      {
        sub_60140(
          v13,
          v7,
          v13[22],
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * v5) + 8LL) + 32LL),
          &v21);
        return v22 - __readfsqword(0x28u);
      }
    }
    sub_5F190(a1);
    result = v20;
    if ( a5 + 1 == v20 )
      break;
    if ( a5 + 3 != v20 )
      return result;
  }
  return sub_60280((_QWORD *)a1, a2, v19, a4, a5);
}

