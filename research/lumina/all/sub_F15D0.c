__int64 __fastcall sub_F15D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r12d
  void (*v8)(void); // rax
  __int64 v10; // rdi
  __int64 v12; // rdi
  __int64 *v13; // rax

  v6 = *(_QWORD *)a1;
  v7 = *(_DWORD *)(a1 + 52);
  if ( *(_QWORD *)(a1 + 168) )
  {
    v8 = (void (*)(void))qword_2424C0;
    ++*(_BYTE *)(v6 + 104);
    if ( v8 )
      v8();
    v10 = *(_QWORD *)(v6 + 392);
    if ( !v10 )
    {
      v13 = sub_DC1C0(v6, 0x38u);
      v10 = (__int64)v13;
      if ( !v13 )
      {
        *(_QWORD *)(v6 + 392) = 0;
        goto LABEL_6;
      }
      v13[3] = v6;
      *((_WORD *)v13 + 10) = 1;
      *(_QWORD *)(v6 + 392) = v13;
    }
    sub_F11D0(v10, *(_QWORD **)(a1 + 168), -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, a6);
LABEL_6:
    if ( qword_2424C8 )
      qword_2424C8();
    --*(_BYTE *)(v6 + 104);
    goto LABEL_9;
  }
  v12 = *(_QWORD *)(v6 + 392);
  if ( v12 )
  {
    if ( (*(_WORD *)(v12 + 20) & 0x9000) != 0 )
      sub_C93F0(v12, a2, a3, a4, a5, a6);
    else
      *(_WORD *)(v12 + 20) = 1;
  }
LABEL_9:
  *(_DWORD *)(v6 + 80) = v7;
  *(_DWORD *)(v6 + 84) = -1;
  return v7;
}
