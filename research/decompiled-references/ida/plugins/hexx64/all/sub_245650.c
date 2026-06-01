_BOOL8 __fastcall sub_245650(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v5; // eax

  v4 = a3;
  v5 = sub_243010(a1, (__int64 *)(a2 + 48), (_QWORD *)(a3 + 48), a4);
  if ( v5 >= 0 )
    return v5 & 1;
  if ( v5 == -1 )
    v4 = a2;
  return *(_DWORD *)(v4 + 8) == 61 && !sub_255A30(*(__int64 **)(v4 + 24));
}

