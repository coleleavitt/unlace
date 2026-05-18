__int64 __fastcall sub_128C80(__int64 a1, int *a2, int a3, int a4, char a5, double a6)
{
  char v6; // bp
  __int64 v7; // r14
  int v8; // ebx
  int v9; // r12d
  _DWORD *v10; // r15
  unsigned __int8 *v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // ecx
  _BYTE *v14; // rdx
  int v16; // edi
  unsigned __int8 *v17; // [rsp+8h] [rbp-A0h]
  char v18; // [rsp+17h] [rbp-91h]
  _BYTE v22[8]; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall *v23)(__int64, __int64); // [rsp+38h] [rbp-70h]
  __int64 (__fastcall *v24)(__int64); // [rsp+40h] [rbp-68h]
  __int16 v25; // [rsp+54h] [rbp-54h]
  int v26; // [rsp+58h] [rbp-50h]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v6 = a5;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *a2;
  v27 = __readfsqword(0x28u);
  v18 = ((a5 & 1) == 0) + 80;
  if ( !*(_BYTE *)(a1 + 35) )
    v6 = a5 & 0xFD;
  if ( v8 > 0 )
  {
    v9 = 0;
    v10 = a2 + 2;
    while ( 1 )
    {
      if ( (v6 & 4) != 0 && *((_WORD *)v10 + 10) )
      {
        if ( (v6 & 8) != 0 )
        {
          --v9;
          --v8;
        }
        else
        {
          sub_E1710(v7, v18, *((unsigned __int16 *)v10 + 10) + a4 - 1, a3 + v9, 0);
        }
        goto LABEL_8;
      }
      v11 = *(unsigned __int8 **)v10;
      if ( (v6 & 2) != 0 )
      {
        v26 = 0;
        v25 = 2;
        v23 = sub_CE7B0;
        v24 = sub_C43E0;
        if ( !v11 )
          break;
        v17 = v11;
        sub_CDCD0((__int64)v22, (__int64)v11);
        v11 = v17;
        if ( v25 )
          break;
      }
      v12 = sub_1257D0(a1, v11, a3 + v9, a6);
      v13 = a3 + v9;
      if ( a3 + v9 == v12 )
      {
LABEL_8:
        ++v9;
        v10 += 6;
        if ( v8 <= v9 )
          return (unsigned int)v8;
      }
      else
      {
        if ( v18 == 80 )
        {
          v14 = byte_241F50;
          if ( !*(_BYTE *)(*(_QWORD *)v7 + 103LL) )
            v14 = (_BYTE *)(*(_QWORD *)(v7 + 136) + 24LL * (*(_DWORD *)(v7 + 144) - 1));
          if ( *v14 == 80 )
          {
            v16 = *((_DWORD *)v14 + 3);
            if ( v16 + *((_DWORD *)v14 + 1) + 1 == v12 && v13 == v16 + *((_DWORD *)v14 + 2) + 1 && !*((_WORD *)v14 + 1) )
            {
              *((_DWORD *)v14 + 3) = v16 + 1;
              goto LABEL_8;
            }
          }
        }
        ++v9;
        v10 += 6;
        sub_E1710(v7, v18, v12, v13, 0);
        if ( v8 <= v9 )
          return (unsigned int)v8;
      }
    }
    sub_127A90(a1, (__int64)v11, a3 + v9, a6);
    goto LABEL_8;
  }
  return (unsigned int)v8;
}
