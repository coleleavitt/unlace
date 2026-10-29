__int64 __fastcall sub_1205A0(_BYTE *a1, __int64 a2, char a3)
{
  unsigned int v3; // ecx
  int v4; // eax
  __int64 v6; // rdi
  _BYTE *v7; // rcx
  _QWORD v9[4]; // [rsp+0h] [rbp-88h] BYREF
  _DWORD *v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+28h] [rbp-60h]
  char v12; // [rsp+30h] [rbp-58h]
  _QWORD v13[5]; // [rsp+40h] [rbp-48h] BYREF
  char v14; // [rsp+68h] [rbp-20h]
  _QWORD *v15; // [rsp+70h] [rbp-18h]
  unsigned __int64 v16; // [rsp+78h] [rbp-10h]

  v3 = 1;
  v16 = __readfsqword(0x28u);
  v4 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 1 )
  {
    v6 = *(_QWORD *)(a2 + 96);
    memset(&v9[1], 0, 24);
    v9[0] = &off_4DD818;
    v7 = a1;
    v11 = v6;
    v12 = a3;
    v10 = a1;
    if ( a3 )
    {
      if ( sub_11A5E0(v6, nullptr, 0, (__int64)a1) )
        return 1;
      v7 = v10;
      if ( *v10 == 2 )
        return 1;
      if ( (unsigned int)(*v10 - 56) <= 1 )
      {
LABEL_4:
        if ( v7[64] == 8 && (*(_BYTE *)(*((_QWORD *)v7 + 9) + 280LL) & 0x30) != 0 )
          goto LABEL_8;
        return 1;
      }
    }
    else if ( (unsigned int)(v4 - 56) <= 1 )
    {
      goto LABEL_4;
    }
LABEL_8:
    memset(&v13[1], 0, 32);
    v14 = 0;
    v13[0] = &off_4DD6D8;
    v15 = v9;
    LOBYTE(v3) = (unsigned int)sub_11E900(a1, (__int64)v13) != 0;
  }
  return v3;
}

