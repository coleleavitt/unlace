unsigned __int64 __fastcall sub_32AA0(__int64 a1)
{
  char v1; // dl
  char v2; // al
  __int64 v3; // rax
  char v5; // bp
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // r12d
  int v9; // edx
  _QWORD v10[3]; // [rsp+0h] [rbp-248h] BYREF
  int v11; // [rsp+1Ch] [rbp-22Ch]
  int v12; // [rsp+20h] [rbp-228h]
  int v13; // [rsp+24h] [rbp-224h]
  int v14; // [rsp+28h] [rbp-220h]
  int v15; // [rsp+30h] [rbp-218h]
  unsigned __int64 v16; // [rsp+228h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v1 = qfileexist();
  v2 = 1;
  if ( v1 )
    v2 = qfileexist() ^ 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 1200) + 8230LL) = v2;
  v3 = *(_QWORD *)(a1 + 1200);
  if ( !*(_BYTE *)(v3 + 8230) )
  {
    if ( *(_BYTE *)(a1 + 2713) )
    {
      *(_BYTE *)(v3 + 8230) = 1;
    }
    else
    {
      sub_48C60(v10);
      v5 = sub_48CB0(v10, *(_QWORD *)(a1 + 1200) + 11408LL);
      if ( v5 )
      {
        v8 = v12;
        v9 = getinf();
        v6 = *(_QWORD *)(a1 + 1200);
        if ( v8 == v9 && v13 == 1480741448 && v11 > 7 && v14 == *(_DWORD *)(v6 + 8204) )
          v5 = v15 != *(_QWORD *)(v6 + 8216);
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 1200);
        v5 = 1;
      }
      v7 = v10[0];
      *(_BYTE *)(v6 + 8230) = v5;
      if ( v7 )
      {
        v10[1] = 0;
        qfree();
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}

