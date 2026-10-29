__int64 __fastcall sub_D5F10(__int64 a1, __int64 a2, unsigned __int8 **a3)
{
  __int64 v4; // r12
  unsigned __int8 *v5; // r8
  __int64 v6; // rbp
  char *v7; // rdi
  __int16 v8; // ax
  int v10; // esi
  __int16 v11; // ax
  __int64 v12; // [rsp+0h] [rbp-98h] BYREF
  __int16 v13; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int64 v14; // [rsp+78h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( *a3 )
    {
      if ( a3[2] )
      {
        v4 = sub_CA640(*(_QWORD *)a1, *a3, *(_BYTE **)(a1 + 8));
        if ( v4 )
        {
          v5 = a3[1];
          if ( !v5 )
          {
LABEL_13:
            v7 = (char *)a3[2];
LABEL_14:
            v13 = *(_WORD *)(v4 + 60);
            sub_D5CD0(v7, 1, v4 + 58, (__int64)&v12);
            v8 = v13;
            *(_DWORD *)(v4 + 48) |= 0x10u;
            *(_WORD *)(v4 + 60) = v8;
            return 0;
          }
          if ( !*a3 || (unsigned int)sub_CA2B0(*a3, a3[1]) )
          {
            v6 = sub_CF360(*(_QWORD *)a1, v5, *(unsigned __int8 **)(a1 + 8));
            v7 = (char *)a3[2];
            if ( !v6 )
              goto LABEL_14;
          }
          else
          {
            v6 = *(_QWORD *)(v4 + 16);
            if ( !v6 )
              goto LABEL_13;
            while ( (*(_BYTE *)(v6 + 99) & 3) != 2 )
            {
              v6 = *(_QWORD *)(v6 + 40);
              if ( !v6 )
                goto LABEL_13;
            }
            v7 = (char *)a3[2];
          }
          v10 = *(unsigned __int16 *)(v6 + 94);
          *(_BYTE *)(v6 + 99) &= ~4u;
          sub_D5CD0(v7, v10 + 1, *(_QWORD *)(v6 + 16), v6);
          *(_BYTE *)(v6 + 99) |= 0x80u;
          if ( !*(_QWORD *)(v6 + 72) )
          {
            v11 = **(_WORD **)(v6 + 16);
            *(_DWORD *)(v4 + 48) |= 0x10u;
            *(_WORD *)(v4 + 58) = v11;
          }
        }
      }
    }
  }
  return 0;
}
