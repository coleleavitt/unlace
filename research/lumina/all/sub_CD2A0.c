unsigned __int64 __fastcall sub_CD2A0(__int64 a1, int a2)
{
  int v3; // edx
  unsigned __int8 v4; // cl
  unsigned __int8 *v5; // rdi
  int v7; // eax
  double v8; // xmm0_8
  __int16 v9; // ax
  __int16 v10; // ax
  __int64 v11; // r12
  double v12; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_BYTE *)(a1 + 22);
  v13 = __readfsqword(0x28u);
  v5 = *(unsigned __int8 **)(a1 + 8);
  v12 = 0.0;
  if ( v3 )
  {
    v7 = sub_CAFA0(v5, &v12, v3, v4);
    if ( v7 > 0 )
    {
      v8 = v12;
      if ( v7 != 1 )
        goto LABEL_5;
      v11 = (unsigned int)(int)v12;
      if ( sub_C7C90(v11, v12) )
      {
        *(_QWORD *)a1 = v11;
      }
      else if ( (unsigned int)sub_C2450(*(char **)(a1 + 8), (_QWORD *)a1, *(_DWORD *)(a1 + 16), *(_BYTE *)(a1 + 22)) )
      {
        v8 = v12;
LABEL_5:
        v9 = *(_WORD *)(a1 + 20);
        *(double *)a1 = v8;
        v10 = v9 | 8;
        *(_WORD *)(a1 + 20) = v10;
        if ( a2 )
        {
          sub_CD250((double *)a1, (_WORD *)(a1 + 20));
          v10 = *(_WORD *)(a1 + 20);
        }
        goto LABEL_7;
      }
      v10 = *(_WORD *)(a1 + 20) | 4;
LABEL_7:
      *(_WORD *)(a1 + 20) = v10 & 0xFFFD;
    }
  }
  return __readfsqword(0x28u) ^ v13;
}
