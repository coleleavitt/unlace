__int64 __fastcall sub_11C3A0(_BYTE *a1, __int64 a2, char a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // ecx
  int v7; // eax
  __int64 v9; // rdi
  _BYTE *v10; // rcx
  _QWORD v12[4]; // [rsp+0h] [rbp-88h] BYREF
  _DWORD *v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+28h] [rbp-60h]
  char v15; // [rsp+30h] [rbp-58h]
  _QWORD v16[5]; // [rsp+40h] [rbp-48h] BYREF
  char v17; // [rsp+68h] [rbp-20h]
  _QWORD *v18; // [rsp+70h] [rbp-18h]
  unsigned __int64 v19; // [rsp+78h] [rbp-10h]

  v6 = 1;
  v19 = __readfsqword(0x28u);
  v7 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 1 )
  {
    v9 = *(_QWORD *)(a2 + 96);
    memset(&v12[1], 0, 24);
    v12[0] = off_4BDF98;
    v10 = a1;
    v14 = v9;
    v15 = a3;
    v13 = a1;
    if ( a3 )
    {
      if ( sub_1163E0(v9, 0, 0, (__int64)a1, a5, a6) )
        return 1;
      v10 = v13;
      if ( *v13 == 2 )
        return 1;
      if ( (unsigned int)(*v13 - 56) <= 1 )
      {
LABEL_4:
        if ( v10[64] == 8 && (*(_BYTE *)(*((_QWORD *)v10 + 9) + 280LL) & 0x30) != 0 )
          goto LABEL_8;
        return 1;
      }
    }
    else if ( (unsigned int)(v7 - 56) <= 1 )
    {
      goto LABEL_4;
    }
LABEL_8:
    memset(&v16[1], 0, 32);
    v17 = 0;
    v16[0] = off_4BDE58;
    v18 = v12;
    LOBYTE(v6) = (unsigned int)sub_11A700(a1, (__int64)v16) != 0;
  }
  return v6;
}

