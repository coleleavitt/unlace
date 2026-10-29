__int64 __fastcall sub_16C3D0(__int64 a1, __int64 a2)
{
  size_t v4; // rax
  size_t v5; // r12
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  if ( *(_BYTE *)a2 != 45 )
  {
    if ( !unk_2439A0 )
      sub_198E10(2695);
    BUG();
  }
  if ( *(_BYTE *)(a2 + 1) != 115 )
    return sub_16C390(a1, (_BYTE *)a2);
  v4 = strlen((const char *)(a2 + 2));
  v5 = v4;
  if ( v4 )
  {
    v6 = *(void **)(a1 + 176);
    v7 = v4 + 1;
    if ( *(_QWORD *)(a1 + 192) < v4 + 1 )
    {
      v8 = sub_1987B0(a1 + 176, *(_QWORD *)(a1 + 176), v7, 1);
      *(_QWORD *)(a1 + 176) = v8;
      v6 = (void *)v8;
    }
    *(_QWORD *)(a1 + 184) = v7;
    memmove(v6, (const void *)(a2 + 2), v5);
    *(_BYTE *)(*(_QWORD *)(a1 + 176) + v5) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 184) = 0;
  }
  *(_DWORD *)(a1 + 168) |= 0x100u;
  return 1;
}
