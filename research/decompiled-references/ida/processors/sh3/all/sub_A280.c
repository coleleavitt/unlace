__int64 __fastcall sub_A280(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int128 v10; // [rsp+0h] [rbp-188h] BYREF
  __int64 v11; // [rsp+10h] [rbp-178h]
  __int64 v12; // [rsp+18h] [rbp-170h]
  __int64 v13; // [rsp+20h] [rbp-168h]
  _BYTE v14[16]; // [rsp+28h] [rbp-160h] BYREF
  __int64 v15; // [rsp+38h] [rbp-150h]
  _QWORD v16[4]; // [rsp+168h] [rbp-20h] BYREF

  v1 = *(_WORD *)(a1 + 40);
  v16[0] = __readfsqword(0x28u);
  if ( v1 <= 7u )
  {
    if ( v1 > 5u )
    {
      v6 = *(_QWORD *)(a1 + 416);
      if ( v6 == -1 )
        v6 = *(_QWORD *)(a1 + 408);
      if ( v6 >= *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16) )
      {
        v2 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
        v11 = -1;
        v7 = v1 == 7;
        v8 = v2 + 2;
        v12 = 0;
        v9 = v14;
        if ( !v7 )
          v8 = v2;
        v10 = -1;
        v13 = 0;
        do
        {
          *(_WORD *)v9 = 0;
          v9 += 5;
          *((_WORD *)v9 - 19) = 0;
          *((_WORD *)v9 - 18) = 0;
          *((_DWORD *)v9 - 2) = 0;
          *((_WORD *)v9 - 17) = 0;
          *((_OWORD *)v9 - 2) = 0;
          *(v9 - 2) = 0;
        }
        while ( v9 != v16 );
        if ( (int)((__int64 (__fastcall *)(__int128 *, __int64, _QWORD *, _QWORD, _QWORD, _QWORD, double))decode_insn)(
                    &v10,
                    v8,
                    v16,
                    0,
                    0,
                    0,
                    0.0) > 0
          && (_WORD)v12 == 8
          && v14[1] == 7 )
        {
          v2 = v15 + 16 * v10;
        }
        goto LABEL_4;
      }
    }
  }
  else if ( (unsigned __int16)(v1 - 12) <= 1u )
  {
    v2 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
LABEL_4:
    v3 = *(_QWORD *)(a1 + 864);
    v4 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v3 + 40) = 25344;
    *(_QWORD *)(v3 + 48) = 0;
    *(_QWORD *)(v3 + 56) = v4;
    *(_QWORD *)(v3 + 64) = v2;
    *(_DWORD *)(v3 + 72) = 0;
    return 1;
  }
  return 0;
}

