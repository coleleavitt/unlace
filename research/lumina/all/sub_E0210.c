__int64 __fastcall sub_E0210(__int64 a1)
{
  int v2; // edx
  unsigned __int8 v3; // cl
  unsigned __int8 *v4; // rdi
  int v6; // eax
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 21) & 4) != 0 && (unsigned int)sub_E01A0((int *)a1) )
  {
    *(_QWORD *)a1 = 0;
    return 4;
  }
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_BYTE *)(a1 + 22);
  v4 = *(unsigned __int8 **)(a1 + 8);
  *(_QWORD *)a1 = 0;
  if ( v2 )
  {
    v6 = sub_CAFA0(v4, (double *)a1, v2, v3);
    if ( v6 > 0 )
    {
      if ( v6 != 1 || (unsigned int)sub_C2450(*(char **)(a1 + 8), v7, *(_DWORD *)(a1 + 16), *(_BYTE *)(a1 + 22)) )
        return 8;
      goto LABEL_10;
    }
    if ( v6 )
      return 8;
    v3 = *(_BYTE *)(a1 + 22);
    v2 = *(_DWORD *)(a1 + 16);
    v4 = *(unsigned __int8 **)(a1 + 8);
  }
  if ( (int)sub_C2450((char *)v4, v7, v2, v3) > 1 )
    return 8;
LABEL_10:
  *(_QWORD *)a1 = v7[0];
  return 4;
}
