__int64 __fastcall sub_8A0D0(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v8; // esi
  int v9; // eax
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // r12d

  v8 = *((unsigned __int8 *)a3 + 32);
  if ( (_BYTE)v8 == 0x91 )
  {
    v11 = *a3;
    v12 = *(_DWORD *)(a7 + 24);
    if ( v12 == 0x80000000 )
    {
      v15 = *(unsigned __int16 *)(a4 + 40);
      v12 = v15 + get_frame_retsize(a4);
    }
    else if ( (*(_BYTE *)(a4 + 17) & 1) == 0 )
    {
      v12 -= *(_DWORD *)(a4 + 56);
    }
    *a2 = v11 + v12;
    return 1;
  }
  if ( (_BYTE)v8 == 0x9C )
  {
    v14 = *a3;
    *a2 = v14 + (int)(get_frame_retsize(a4) + *(unsigned __int16 *)(a4 + 40));
    return 1;
  }
  if ( (*(_BYTE *)(a4 + 16) & 0x10) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 2416);
    if ( v9 != -1 && (unsigned __int8)v8 == v9 + 112 )
    {
      v13 = *a3;
      *a2 = *a3;
      if ( (*(_BYTE *)(a4 + 17) & 1) == 0 )
        *a2 = v13 - *(_QWORD *)(a4 + 56);
      return 1;
    }
  }
  if ( (debug & 0x400000) != 0 )
    sub_88B80((__int64)"get_frame_offset() with loc of type 0x%x.\n", v8);
  *a2 = 0;
  return 0;
}

