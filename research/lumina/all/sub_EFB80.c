void __fastcall sub_EFB80(__int64 a1, double a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int8 *v7; // rcx
  __int64 v9; // rsi
  void *v10; // rbx
  char *v11; // rsi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // ebp
  int v17; // eax
  char *v18; // rdi
  int v19; // edx
  __int64 v20; // rdi
  char *v21; // rdi
  size_t v22; // rdx

  v7 = byte_1BAD40;
  if ( byte_1BAD40[*(_WORD *)(*a4 + 20) & 0x3F] == 5 )
    return;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(__int16 *)(v9 + 20) >= 0
      ? sub_EF2D0((_QWORD *)(a1 + 8), v9, 48, (__int64)byte_1BAD40, a6, a7)
      : *(void **)(v9 + 8);
  if ( !v10 )
    return;
  sub_D9DB0(*a4, 1u, a2, (__int64)a4, (int)v7, a6, a7);
  v11 = (_BYTE *)(&dword_0 + 1);
  v16 = sub_D9CE0(*a4, 1u, a2, v12, v13, v14, v15);
  v17 = *((_DWORD *)v10 + 8);
  v18 = *((char **)v10 + 5);
  *((_DWORD *)v10 + 8) = v17 - 1;
  if ( !v18 )
  {
    v16 += *((_DWORD *)v10 + 9);
LABEL_7:
    v19 = *((_DWORD *)v10 + 6);
    if ( v19 <= v16 )
    {
LABEL_8:
      *((_DWORD *)v10 + 6) = 0;
LABEL_9:
      v20 = *((_QWORD *)v10 + 5);
      *((_DWORD *)v10 + 5) = 0;
      sub_C91C0(v20, (__int64)v11);
      *((_QWORD *)v10 + 5) = 0;
      return;
    }
    goto LABEL_14;
  }
  if ( v17 - 1 <= 0 )
    goto LABEL_7;
  v11 = v18 + 4;
  v16 += *(_DWORD *)v18;
  memmove(v18, v18 + 4, 4LL * (v17 - 2));
  v19 = *((_DWORD *)v10 + 6);
  if ( v19 <= v16 )
    goto LABEL_8;
LABEL_14:
  v21 = *((char **)v10 + 1);
  v22 = (unsigned int)(v19 - v16);
  *((_DWORD *)v10 + 6) = v22;
  v11 = &v21[v16];
  memmove(v21, v11, v22);
  if ( !*((_DWORD *)v10 + 6) )
    goto LABEL_9;
}
