__int64 __fastcall sub_1B170(char *s2, __int64 a2, int a3, int *a4)
{
  __int64 v5; // rax
  __int64 v6; // r12
  char **v7; // r15
  __int64 result; // rax
  int v9; // eax
  int v10; // edx
  char **v11; // rbx
  unsigned __int16 v12; // si
  __int16 v13; // cx
  _BOOL8 v14; // rcx
  unsigned __int16 v16; // [rsp+14h] [rbp-54h] BYREF
  unsigned __int16 v17; // [rsp+16h] [rbp-52h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  v5 = sub_F290((__int64)s2, a2);
  v6 = v5;
  if ( !s2 )
  {
    v16 = *(_WORD *)(v5 + 9316) - 1;
    v17 = *(unsigned __int8 *)(v5 + 9304)
        | (2 * (*(_WORD *)(v5 + 9312) != 0))
        | (4 * (unsigned __int8)*(_WORD *)(v5 + 9308)) & 4;
    v18 = *(_QWORD *)(v5 + 9328);
    v19[0] = *(unsigned int *)(v5 + 9336);
    if ( (unsigned int)sub_148A0(
                         (__int64)"Bochs configuration\n"
                                  "%/<#Location of bochsrc.cfg template file, default file is in ida/cfg folder#BOCHS~R~C"
                                  " :f1:0:40::>\n"
                                  "<#Requires a user-supplied bochs disk image and rc file#Operation mode##~D~isk image:R"
                                  "7>\n"
                                  "<#Emulates code from IDB as is#~I~DB:R8>\n"
                                  "<#Emulates the input file in a Windows like environment#~P~E:R9>11>\n"
                                  "\n"
                                  "<#Delete bochs image files when debugging session is over (ignored in disk image opera"
                                  "tion mode)#De~l~ete image files upon session end:C2>\n"
                                  "<#Facilitates working with breakpoints when segment base is not zero#Use virtual break"
                                  "points when protected mode is enabled:C3>\n"
                                  "<#64-bit emulation#64-~b~it emulation:C6>10>\n"
                                  "<#Stack size to reserve#Startup stack size (in KB):D4:5:5::>\n"
                                  "<#Max memory allowed to be allocated by application#Maximum memory (in KB):D5:5:5::>\n",
                         sub_12BA0,
                         v5 + 5208,
                         &v16,
                         &v17,
                         &v18,
                         v19) )
    {
      v9 = v17;
      v10 = v16;
      v11 = &off_71060;
      v12 = v16;
      *(_BYTE *)(v6 + 9304) = v17;
      ++v10;
      v13 = (unsigned __int16)v9 >> 1;
      LOWORD(v9) = (unsigned __int16)v9 >> 2;
      *(_BYTE *)(v6 + 9304) &= 1u;
      *(_DWORD *)(v6 + 9316) = v10;
      *(_WORD *)(v6 + 9312) = v13 & 1;
      v14 = v12 != 0;
      *(_DWORD *)(v6 + 9308) = v14 & v9;
      *(_QWORD *)(v6 + 9328) = (unsigned int)v18;
      *(_DWORD *)(v6 + 9336) = v19[0];
      callui(1085, v10 == 1, &callui, v14);
      do
      {
        if ( *((_BYTE *)v11 + 9) != 0xFF )
          sub_12D00(v6, (__int64)v11);
        v11 += 4;
      }
      while ( v11 != &off_711C0 );
      return 0;
    }
    return 0;
  }
  v7 = &off_71040;
  if ( !*s2 )
  {
    sub_1B030(v5);
    return 0;
  }
  while ( strcmp(*v7, s2) )
  {
    v7 += 4;
    if ( v7 == &off_711C0 )
      return 1;
  }
  result = 2;
  if ( *((char *)v7 + 8) == a3 )
    return sub_16290(v6, (__int64)v7, a4, (_DWORD)a2 == 2);
  return result;
}

