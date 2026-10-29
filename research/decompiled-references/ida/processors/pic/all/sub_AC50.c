__int64 __fastcall sub_AC50(__int64 a1, int a2)
{
  __int64 result; // rax
  char v3; // cl
  char v4; // dl
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rdx

  result = a1;
  v3 = byte_DECB[a2];
  v4 = *(_BYTE *)(a1 + 246);
  if ( v3 != v4 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(a1 + 246) = v3;
    *(_DWORD *)(v5 + 16) = 2 * a2 + 12;
    v4 = *(_BYTE *)(a1 + 246);
  }
  switch ( v4 )
  {
    case 1:
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = &off_11B00;
      *(_QWORD *)(a1 + 248) = "pic14.cfg";
      goto LABEL_7;
    case 2:
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = &off_11A80;
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 248) = "pic16.cfg";
      *(_DWORD *)(v8 + 16) = 8;
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) = 12;
      goto LABEL_7;
    case 0:
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = &off_11B80;
      *(_QWORD *)(a1 + 248) = "pic12.cfg";
LABEL_7:
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(_DWORD *)(v6 + 12) & 0xFFFFFFEF;
      if ( *(_BYTE *)(a1 + 246) != 2 )
        v7 = *(_DWORD *)(v6 + 12) | 0x10;
      *(_DWORD *)(v6 + 12) = v7;
      return result;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_AD50(10311);
}

