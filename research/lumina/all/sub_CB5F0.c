__int64 __fastcall sub_CB5F0(__int64 a1)
{
  __int16 v2; // ax
  int v3; // edx
  unsigned __int8 v4; // cl
  unsigned __int8 *v5; // rdi
  double v6; // xmm0_8
  __int64 v7; // rbp
  _BOOL4 v8; // eax
  __int16 v9; // dx
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  v2 = *(_WORD *)(a1 + 20);
  if ( (v2 & 0x2D) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 16);
    v4 = *(_BYTE *)(a1 + 22);
    v5 = *(unsigned __int8 **)(a1 + 8);
    *(_QWORD *)a1 = 0;
    if ( v3 )
    {
      if ( (unsigned int)sub_CAFA0(v5, (double *)a1, v3, v4) > 1 )
        goto LABEL_4;
      v4 = *(_BYTE *)(a1 + 22);
      v3 = *(_DWORD *)(a1 + 16);
      v5 = *(unsigned __int8 **)(a1 + 8);
    }
    if ( (int)sub_C2450((char *)v5, v11, v3, v4) <= 1 )
    {
      v7 = v11[0];
      v9 = *(_WORD *)(a1 + 20) & 0xF240;
      goto LABEL_10;
    }
LABEL_4:
    v6 = *(double *)a1;
    v7 = (unsigned int)(int)*(double *)a1;
    v11[0] = v7;
    v8 = sub_C7C90(v7, v6);
    v9 = *(_WORD *)(a1 + 20) & 0xF240;
    if ( !v8 )
    {
      v2 = v9 | 8;
      goto LABEL_6;
    }
LABEL_10:
    *(_QWORD *)a1 = v7;
    v2 = v9 | 4;
  }
LABEL_6:
  *(_WORD *)(a1 + 20) = v2 & 0xFBED;
  return 0;
}
