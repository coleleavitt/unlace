__int64 __fastcall sub_10FC0(__int64 a1, int a2)
{
  unsigned __int16 v2; // ax
  char v3; // r12
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v7; // rax
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  char v10; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-20h] BYREF

  v2 = *(_WORD *)(a1 + 40);
  v11 = __readfsqword(0x28u);
  if ( v2 <= 0xAu )
  {
    v3 = 1;
    if ( v2 <= 8u )
      return 0;
  }
  else
  {
    if ( (unsigned __int16)(v2 - 11) > 1u )
      return 0;
    v3 = 0;
  }
  if ( *(_BYTE *)(a1 + 57) == 7 )
  {
    v4 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    if ( ((v2 - 10) & 0xFFFD) != 0 )
    {
LABEL_6:
      v5 = *(_QWORD *)(a1 + 864);
      *(_QWORD *)(v5 + 56) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v5 + 40) = 25344;
      *(_QWORD *)(v5 + 48) = 0;
      *(_QWORD *)(v5 + 64) = v4;
      *(_BYTE *)(v5 + 72) = v3;
      *(_WORD *)(v5 + 73) = 0;
      *(_BYTE *)(v5 + 75) = 0;
      return 1;
    }
    v7 = a1 + 8LL * a2;
    if ( a2 > 0 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v7 + 384);
        if ( v9 != -1 )
          break;
        v7 -= 8;
        if ( !--a2 )
        {
          v9 = *(_QWORD *)(a1 + 384);
          break;
        }
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8LL * a2 + 384);
    }
    if ( v9 >= v4 )
    {
      v4 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
      v8 = (unsigned __int64 *)&v10;
      do
      {
        *(_WORD *)v8 = 0;
        v8 += 5;
        *((_WORD *)v8 - 19) = 0;
        *((_WORD *)v8 - 18) = 0;
        *((_DWORD *)v8 - 2) = 0;
        *((_WORD *)v8 - 17) = 0;
        *((_OWORD *)v8 - 2) = 0;
        *(v8 - 2) = 0;
      }
      while ( v8 != &v11 );
      decode_insn();
      goto LABEL_6;
    }
  }
  return 0;
}

