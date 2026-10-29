__int64 __fastcall sub_15140(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r9
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  char *v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int16 v11; // [rsp+8h] [rbp-190h] BYREF
  __int128 v12; // [rsp+10h] [rbp-188h] BYREF
  __int64 v13; // [rsp+20h] [rbp-178h]
  __int64 v14; // [rsp+28h] [rbp-170h]
  __int64 v15; // [rsp+30h] [rbp-168h]
  char v16; // [rsp+38h] [rbp-160h] BYREF
  __int64 v17; // [rsp+48h] [rbp-150h]
  _QWORD v18[4]; // [rsp+178h] [rbp-20h] BYREF

  v18[0] = __readfsqword(0x28u);
  if ( (unsigned __int16)(*(_WORD *)(a1 + 40) - 9) <= 1u && *(_BYTE *)(*(_QWORD *)(a1 + 864) + 32LL) == 2 )
  {
    if ( (unsigned __int8)same_value_jpt(a1, a1 + 96, 0) )
    {
      v1 = sub_262E0(*(_QWORD *)(a1 + 888), &v11, *(_QWORD *)(a1 + 32), *(unsigned __int16 *)(a1 + 62));
      if ( (_BYTE)v1 )
      {
        v4 = *(_QWORD *)(a1 + 376);
        v5 = *(unsigned __int16 *)(a1 + 102);
        *(_BYTE *)(v4 + 68) = *(_BYTE *)(a1 + 101);
        *(_DWORD *)(v4 + 64) = v5;
        *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v11 + 1;
        v6 = *(_QWORD *)(a1 + 152) + 16LL * *(_QWORD *)(a1 + 16);
        v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
        if ( v6 != v7 )
        {
          v7 &= v6;
          if ( v6 == -1 )
            v7 = -1;
        }
        if ( *(_WORD *)(a1 + 40) != 10 )
          goto LABEL_11;
        if ( *(_QWORD *)(a1 + 384) >= v7 )
        {
          v7 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
          v13 = -1;
          v14 = 0;
          v8 = &v16;
          v15 = 0;
          v12 = -1;
          do
          {
            *(_WORD *)v8 = 0;
            v8 += 40;
            *((_WORD *)v8 - 19) = 0;
            *((_WORD *)v8 - 18) = 0;
            *((_DWORD *)v8 - 2) = 0;
            *((_WORD *)v8 - 17) = 0;
            *((_OWORD *)v8 - 2) = 0;
            *((_QWORD *)v8 - 2) = 0;
          }
          while ( v18 != (_QWORD *)v8 );
          if ( (int)decode_insn(&v12, v7, v18, 0, 0, v3, 0.0) > 0 && (_WORD)v14 == 140 )
          {
            v7 = v17 + 16 * v12;
            v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
            if ( v7 != v9 )
            {
              v10 = v7 & v9;
              if ( v7 != -1 )
                v7 = v10;
            }
          }
LABEL_11:
          *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = v7;
          return v1;
        }
      }
    }
  }
  return 0;
}

