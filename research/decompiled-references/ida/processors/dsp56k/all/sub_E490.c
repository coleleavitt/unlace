__int64 __fastcall sub_E490(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // r12
  unsigned __int16 *v10; // r12
  unsigned int v11; // r15d
  unsigned __int16 *v12; // rbx
  int i; // ebp
  char *v14; // rax
  _QWORD *v15; // rdi

  v7 = *(int *)(a1 + 264);
  *(_DWORD *)(a1 + 264) = v7 + 1;
  v8 = a1 + 80 * v7 + 272;
  *(_QWORD *)(a1 + 248) = v8;
  *(_BYTE *)(v8 + 4) = 8;
  *(_BYTE *)(v8 + 44) = 8;
  **(_BYTE **)(a1 + 248) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
  if ( *(_DWORD *)(a1 + 600) == 1 )
  {
    if ( !(_BYTE)byte_2AA70 && __cxa_guard_acquire(&byte_2AA70) )
    {
      sub_CD40((__int64)&qword_21380, 3);
      __cxa_guard_release(&byte_2AA70);
    }
    v9 = &qword_21380;
  }
  else
  {
    if ( !(_BYTE)byte_2AA68 && __cxa_guard_acquire(&byte_2AA68) )
    {
      sub_CD40((__int64)&qword_2A620, 6);
      __cxa_guard_release(&byte_2AA68);
    }
    v9 = &qword_2A620;
  }
  v10 = (unsigned __int16 *)&v9[18 * a3];
  v11 = sub_E440(a1, *v10);
  if ( (_BYTE)v11 )
  {
    v12 = v10 + 12;
    for ( i = 0; i != 5; ++i )
    {
      v14 = *(char **)&v10[12 * i + 8];
      if ( v14 )
      {
        v15 = (_QWORD *)(a1 + *(_QWORD *)v12);
        if ( ((unsigned __int8)v14 & 1) != 0 )
          v14 = *(char **)&v14[*v15 - 1];
        ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v14)(
          v15,
          a2,
          (a4 & *((_DWORD *)v12 + 2)) >> *((_DWORD *)v12 + 3));
      }
      v12 += 12;
    }
  }
  return v11;
}

