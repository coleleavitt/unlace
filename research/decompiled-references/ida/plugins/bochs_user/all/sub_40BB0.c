__int64 __fastcall sub_40BB0(__int64 a1, unsigned __int16 a2, int a3, _DWORD *a4, int a5, char a6, unsigned __int8 a7)
{
  unsigned int v7; // r15d
  unsigned __int64 v10; // rbx
  unsigned int v11; // r13d
  unsigned int v12; // edx
  int v13; // ebx
  unsigned int v14; // r15d
  int v15; // ebp
  unsigned int v16; // r12d
  __int64 result; // rax
  unsigned __int16 v18; // [rsp+8h] [rbp-60h]
  bool v19; // [rsp+12h] [rbp-56h]
  char v20; // [rsp+13h] [rbp-55h]
  unsigned int v22; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v7 = a3 & 0xFFFFF000;
  v10 = (unsigned __int64)(((a3 + a5 + 4095) & 0xFFFFF000) - (a3 & 0xFFFFF000)) >> 12;
  v23 = __readfsqword(0x28u);
  v19 = a4 != nullptr;
  if ( a4 && a7 )
    v11 = *a4 & 0xFFFFF000;
  else
    v11 = 0;
  if ( !v10 )
    return 0;
  v20 = a6 ^ 1;
  v12 = v7 + ((_DWORD)v10 << 12);
  v13 = v7;
  v14 = v12;
  v18 = a2;
  v15 = 0;
  v16 = v11;
  while ( 1 )
  {
    v22 = v16;
    result = sub_40AD0(a1, v18, v13, &v22, a7);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 3 || v20 )
        break;
    }
    if ( !v15 && v19 )
      *a4 = v22 + a3 - v13;
    v13 += 4096;
    v16 += a7 << 12;
    ++v15;
    if ( v13 == v14 )
      return 0;
  }
  return result;
}

