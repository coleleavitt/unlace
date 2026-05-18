unsigned __int64 __fastcall sub_10A080(__int64 *a1, int a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // r9
  __int64 *v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rax
  char *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  __int64 v21; // [rsp+8h] [rbp-60h]
  char v22; // [rsp+21h] [rbp-47h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( a2 > 0 )
  {
    v10 = sub_D9DB0(*a3, 1u, a7, (__int64)a3, a4, a5, a6);
    v11 = (__int64)a1;
    if ( !(unsigned int)sub_104900((__int64)&v20, (__int64)a1, v10) )
    {
      if ( a2 == 1 )
      {
LABEL_12:
        if ( (*(_BYTE *)(v21 + 1) & 4) == 0 )
        {
          v11 = (__int64)a1;
          sub_103590(v21, a1, 0, v13, v14, v15, a7);
        }
      }
      else
      {
        v16 = a3 + 1;
        v17 = (__int64)&a3[(unsigned int)(a2 - 2) + 2];
        while ( 1 )
        {
          v11 = 1;
          v19 = (char *)sub_D9DB0(*v16, 1u, a7, v12, v13, v14, v15);
          if ( !v19 )
            break;
          v11 = (__int64)v19;
          v18 = sub_109A50((__int64)&v20, v19, nullptr, (__int64)a1);
          if ( v22 )
            break;
          if ( v18 )
            *(_BYTE *)(v18 + 1) |= 4u;
          if ( ++v16 == (__int64 *)v17 )
            goto LABEL_12;
        }
      }
      sub_CA110(&v20, v11);
    }
  }
  return __readfsqword(0x28u) ^ v23;
}
